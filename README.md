# Never Unzip

## What is it?

Never unzip is a product that send a notification to  your phone whenever your pants' zip is open for too long.

It mainly use an arduino nano and a piezoelectirc cloth.

![image](https://user-images.githubusercontent.com/36692889/163562111-3be3166f-b214-4729-8aae-85108a584557.png)

You clip the box on the top part of your pants and you put the cloth inside near the zip.

![image](https://user-images.githubusercontent.com/37442009/163417741-0d2ba762-82a6-4641-ab1f-4470dadcab64.png)

## How it works?

When you unzip the constraint on the cloth reduces and if it stay 2min in that state it sends a notification to your phone.


## Electronics

The circuit board is quite simple.
We have 4 main composants: A flexible sensor (that symbolize our piezoelectric cloth), an ON / OFF switch, a LED (that symbolize a notification sent) and the arduino itself

![image](https://user-images.githubusercontent.com/36692889/163562165-71627db5-dbd3-4733-a891-0eb772364706.png)

When the cloth produce a low enough power and the switch is ON, we start a timer and once the timer is done we send the notification.
