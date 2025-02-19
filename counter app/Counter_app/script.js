let count = 0; 

const countDisplay = document.querySelector(".count");
const inputBox = document.querySelector(".input-box");


function increment() {
    count++;
    updateCounter();
}


function decrement() {
    count--;
    updateCounter();
}


function reset() {
    count = 0;
    updateCounter();
}

function setValue() {
    const inputValue = inputBox.value;
    if (inputValue !== "") {
        count = parseInt(inputValue);
        updateCounter();
        inputBox.value = ""; 
    }
}


function updateCounter() {
    countDisplay.textContent = count;
}
