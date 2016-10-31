Tutorial
--------

Sets are lists with no duplicate entries. Let's say you want to collect a list of words used in a paragraph:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoicHJpbnQoc2V0KFwibXkgbmFtZSBpcyBFcmljIGFuZCBFcmljIGlzIG15IG5hbWVcIi5zcGxpdCgpKSkiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

This will print out a list containing "my", "name", "is", "Eric", and finally "and". Since the rest of the sentence uses words which are already in the set, they are not inserted twice.

Sets are a powerful tool in Python since they have the ability to calculate differences and intersections between other sets. For example, say you have a list of participants in events A and B:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiIiwic2FtcGxlIjoiYSA9IHNldChbXCJKYWtlXCIsIFwiSm9oblwiLCBcIkVyaWNcIl0pXG5wcmludChhKVxuYiA9IHNldChbXCJKb2huXCIsIFwiSmlsbFwiXSlcbnByaW50KGIpIiwic29sdXRpb24iOiIiLCJzY3QiOiIifQ==
</div>

To find out which members attended both events, you may use the "intersection" method:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYSA9IHNldChbXCJKYWtlXCIsIFwiSm9oblwiLCBcIkVyaWNcIl0pXG5iID0gc2V0KFtcIkpvaG5cIiwgXCJKaWxsXCJdKSIsInNhbXBsZSI6ImEuaW50ZXJzZWN0aW9uKGIpXG5zZXQoWydKb2huJ10pXG5iLmludGVyc2VjdGlvbihhKVxuc2V0KFsnSm9obiddKSIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

To find out which members attended only one of the events, use the "symmetric_difference" method:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYSA9IHNldChbXCJKYWtlXCIsIFwiSm9oblwiLCBcIkVyaWNcIl0pXG5iID0gc2V0KFtcIkpvaG5cIiwgXCJKaWxsXCJdKSIsInNhbXBsZSI6ImEuc3ltbWV0cmljX2RpZmZlcmVuY2UoYilcbnNldChbJ0ppbGwnLCAnSmFrZScsICdFcmljJ10pXG5iLnN5bW1ldHJpY19kaWZmZXJlbmNlKGEpXG5zZXQoWydKaWxsJywgJ0pha2UnLCAnRXJpYyddKSIsInNvbHV0aW9uIjoiIiwic2N0IjoiIn0=
</div>

To find out which members attended only one event and not the other, use the "difference" method:

<div data-datacamp-exercise="" data-height="250" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYSA9IHNldChbXCJKYWtlXCIsIFwiSm9oblwiLCBcIkVyaWNcIl0pXG5iID0gc2V0KFtcIkpvaG5cIiwgXCJKaWxsXCJdKSIsInNhbXBsZSI6ImEuZGlmZmVyZW5jZShiKVxuc2V0KFsnSmFrZScsICdFcmljJ10pXG5iLmRpZmZlcmVuY2UoYSlcbnNldChbJ0ppbGwnXSkiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

To receive a list of all participants, use the "union" method:

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYSA9IHNldChbXCJKYWtlXCIsIFwiSm9oblwiLCBcIkVyaWNcIl0pXG5iID0gc2V0KFtcIkpvaG5cIiwgXCJKaWxsXCJdKSIsInNhbXBsZSI6ImEudW5pb24oYilcbnNldChbJ0ppbGwnLCAnSmFrZScsICdKb2huJywgJ0VyaWMnXSkiLCJzb2x1dGlvbiI6IiIsInNjdCI6IiJ9
</div>

In the exercise below, use the given lists to print out a set containing all the participants from event A which did not attend event B.

<div data-datacamp-exercise="" data-height="200" data-encoded="true">
eyJsYW5ndWFnZSI6InB5dGhvbiIsInByZV9leGVyY2lzZV9jb2RlIjoiYSA9IFtcIkpha2VcIiwgXCJKb2huXCIsIFwiRXJpY1wiXVxuYiA9IFtcIkpvaG5cIiwgXCJKaWxsXCJdIiwic2FtcGxlIjoiYSA9IFtcIkpha2VcIiwgXCJKb2huXCIsIFwiRXJpY1wiXVxuYiA9IFtcIkpvaG5cIiwgXCJKaWxsXCJdIiwic29sdXRpb24iOiJhID0gW1wiSmFrZVwiLCBcIkpvaG5cIiwgXCJFcmljXCJdXG5iID0gW1wiSm9oblwiLCBcIkppbGxcIl1cblxuQSA9IHNldChhKVxuQiA9IHNldChiKVxuXG5wcmludChBLmRpZmZlcmVuY2UoQikpIiwic2N0IjoidGVzdF9vdXRwdXRfY29udGFpbnMoXCJbJ0pha2UnLCAnRXJpYyddXCIpXG5zdWNjZXNzX21zZyhcIk5pY2Ugd29yayFcIikifQ==
</div>

