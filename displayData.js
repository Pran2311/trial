$(document).ready(function () {
    getData();
  });
  // Get data from local storage and disply on console and on next page
  function getData() {
    let localStorageData = localStorage.getItem("formdata");
    let studentObj = JSON.parse(localStorageData);
    console.log(studentObj);
   
    $("#firstName").text(studentObj.fname);
    $("#lastName").text(studentObj.lname);
    $("#userName").text(studentObj.username);
    $("#city").text(studentObj.city);
    $("#state").text(studentObj.state);
    $("#zipcode").text(studentObj.zipcode);

  }
   