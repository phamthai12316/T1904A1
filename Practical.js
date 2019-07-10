function detail()
{
  var name = document.forms["RegForm"]["Name"];
  var email = document.forms["RegForm"]["EMail"];
  var phone = document.forms["RegForm"]["Telephone"];
  var what =  document.forms["RegForm"]["Subject"];
  var gender = document.forms["RegForm"]["Password"];
  var address = document.forms["RegForm"]["Address"];
  var qualification = document.forms["RegForm"]["qualification"]

  if (name.value == "")
  {
    window.alert("Please enter your name.");
    name.focus();
    return false;
  }

  if (address.value == "")
  {
    window.alert("Please enter your address.");
    name.focus();
    return false;
  }

  if (email.value == "")
  {
    window.alert("Please enter a valid e-mail address.");
    email.focus();
    return false;
  }

  if (email.value.indexOf("@", 0) < 0)
  {
    window.alert("Please enter a valid e-mail address.");
    email.focus();
    return false;
  }

  if (email.value.indexOf(".", 0) < 0)
  {
    window.alert("Please enter a valid e-mail address.");
    email.focus();
    return false;
  }

  if (phone.value == "")
  {
    window.alert("Please enter your telephone number.");
    phone.focus();
    return false;
  }

  if (gender.value == "")
  {
    window.alert("Please enter your gender.");
    gender.focus();
    return false;
  }
  if (qualification.value == "")
  {
    window.alert("Please choose your qualification.");
    qualification.focus();
    return false;
  }

  if (what.selectedIndex < 1)
  {
    alert("Please enter your course.");
    what.focus();
    return false;
  }

  return true;
}
