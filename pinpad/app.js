const passCode = prompt("Enter the passcode:");
let container = document.querySelector("#main-container");
let display = document.querySelector("#display");

function test(event) {
  if (event.target.value === "D") {
    display.value = display.value.slice(0, -1);
  } else if (event.target.value === "S") {
    if (passCode === display.value) {
      alert("correct");
      location.reload();
    } else {
      alert("wrong");
      close();
    }
  } else if (event.target.type === "button") {
    display.value += event.target.value;
  }
  if (event.target.value === "clear") {
    display.value = "";
  }
}

container.addEventListener("click", test);
