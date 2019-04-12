<!DOCTYPE html>
<html>
<body>

<h1 class="text-1">Any property could be  inside @media query as long as it's css property </h1>
<div class="block-1">This line will change its color when its width is less than 1200px</div>

<div class="block-2">An object will apear when the width is less than 1000px
  <div class="hidden-object"></div>
</div>

<h1 class="text-1"></h1>
<style>
.block-1{
  height: 50px;
  width: 100%;
  background-color: #c3d3a3;
}
@media only screen and (max-width: 1200px) { /*-- WHEN THE SCREEN IS LESS THAN 1200PX it changes yo LIGHTBLUE */
  .block-1 {
    background-color: lightblue;
  }
}

.block-2{
  height: 120px;
  width: 100%;
  background-color: #c2d4;
}
@media only screen and (max-width: 1200px) { /*-- WHEN THE SCREEN IS LESS THAN 1200PX it changes yo LIGHTBLUE */
  .block-1 {
    background-color: lightblue;
  }
}
.hidden-object{
  width: 100px;
  height: 100px;
  background-color: red;
  display: none;
}
@media only screen and (max-width: 1000px) { /*-- WHEN THE SCREEN IS LESS THAN 1200PX it changes yo LIGHTBLUE */
  .hidden-object {
   display: block;
  }
}
</style>

</body>
</html>
