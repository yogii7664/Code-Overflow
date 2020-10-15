<!DOCTYPE html>
<html>
<body>

<p>Click the button to display the result of 5*5*5.</p>

<button onclick="myFunction()">Try it</button>

<p id="result"></p>

<script>
function myFunction() {
  document.getElementById("result").innerHTML = Math.pow(5, 3);
}
</script>

</body>
</html>
