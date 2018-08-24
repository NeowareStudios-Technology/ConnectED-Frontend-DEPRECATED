using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class calendarPopulator : MonoBehaviour
{
    public GameObject calendarPrefab;
    public GameObject newCalendarDot;
    public GameObject calendarContainer;
    public GameObject monthTrigger;
    public Text yearMonth;
    public class Month
    {
        public int monthTotal;
        public string monthName;
        public int year;
    }
    public Month jan = new Month();
    public Month feb = new Month();
    public Month mar = new Month();
    public Month apr = new Month();
    public Month may = new Month();
    public Month jun = new Month();
    public Month jul = new Month();
    public Month aug = new Month();
    public Month sep = new Month();
    public Month oct = new Month();
    public Month nov = new Month();
    public Month dec = new Month();
    public Month currentMonth;
    public float contentHeight;
    public void Start()
    {
        setMonth(ref jan, 31, "January");
        setMonth(ref feb, 28, "February");
        setMonth(ref mar, 31, "March");
        setMonth(ref apr, 30, "April");
        setMonth(ref may, 31, "May");
        setMonth(ref jun, 30, "June");
        setMonth(ref jul, 31, "July");
        setMonth(ref aug, 31, "August");
        setMonth(ref sep, 30, "September");
        setMonth(ref oct, 31, "October");
        setMonth(ref nov, 30, "November");
        setMonth(ref dec, 31, "December");
        currentMonth = aug;
        contentHeight = this.gameObject.GetComponent<RectTransform>().sizeDelta.y;
        populate();
    }

    public void setYearMonth(string s)
    {
        yearMonth.text = s;
    }

    public void setMonth(ref Month m, int totalDays, string monthName)
    {
        m.monthName = monthName;
        m.monthTotal = totalDays;
    }

    public int count = 0;
    public int yearCount = 0;
    public void populate()
    {
        for (int i = 1; i <= currentMonth.monthTotal; i++)
        {
            newCalendarDot = Instantiate(calendarPrefab, calendarContainer.transform);
            newCalendarDot.GetComponent<dayInfo>().dayNumber = i.ToString();
            newCalendarDot.GetComponent<dayInfo>().Month = currentMonth.monthName;
            newCalendarDot.GetComponent<dayInfo>().Year = (yearCount + 2018).ToString();
            newCalendarDot.transform.GetChild(0).GetComponent<Text>().text = i.ToString();
            if (i == 1)
            {
                newCalendarDot.AddComponent<BoxCollider2D>();
                newCalendarDot.GetComponent<BoxCollider2D>().isTrigger = true;
                newCalendarDot.AddComponent<Rigidbody2D>();
                newCalendarDot.GetComponent<Rigidbody2D>().gravityScale = 0f;
                newCalendarDot.GetComponent<Rigidbody2D>().isKinematic = true;
                newCalendarDot.AddComponent<firstOfMonthTrigger>();
                newCalendarDot.GetComponent<firstOfMonthTrigger>().p = this;
            }
        }
        count++;
        if (count < 15)
        {
            RectTransform rt = calendarContainer.gameObject.GetComponent<RectTransform>();
            rt.sizeDelta = new Vector2 (rt.sizeDelta.x, contentHeight * count);
            //Debug.Log("Finished " + currentMonth.monthName);
            switch (currentMonth.monthName)
            {
                case "January":
                   
                    currentMonth = feb;
                    populate();
                    break;
                case "February":
                    currentMonth = mar;
                    populate();
                    break;
                case "March":
                    currentMonth = apr;
                    populate();
                    break;
                case "April":
                    currentMonth = may;
                    populate();
                    break;
                case "May":
                    currentMonth = jun;
                    populate();
                    break;
                case "June":
                    currentMonth = jul;
                    populate();
                    break;
                case "July":
                    currentMonth = aug;
                    populate();
                    break;
                case "August":
                    currentMonth = sep;
                    populate();
                    break;
                case "September":
                    currentMonth = oct;
                    populate();
                    break;
                case "October":
                    currentMonth = nov;
                    populate();
                    break;
                case "November":
                    currentMonth = dec;
                    populate();
                    break;
                case "December":
                    currentMonth = jan;
                    yearCount++;
                    populate();
                    break;
            }
            return;
        }
        calendarContainer.AddComponent<ContentSizeFitter>();
        calendarContainer.GetComponent<ContentSizeFitter>().verticalFit = ContentSizeFitter.FitMode.PreferredSize;
        calendarContainer.transform.parent.gameObject.AddComponent<ContentSizeFitter>();
        calendarContainer.transform.parent.gameObject.GetComponent<ContentSizeFitter>().verticalFit = ContentSizeFitter.FitMode.PreferredSize;
        monthTrigger.SetActive(true);
    }
}