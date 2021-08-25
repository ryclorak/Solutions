function sortThePile(pileOfTowels, weeklyUsedTowels) {
  for (let z=0; z<weeklyUsedTowels.length; z++) {
    
    var reds = [];
    var blues = [];
    
    for (let i=0; i<weeklyUsedTowels[z]; i++) {
      if (pileOfTowels[pileOfTowels.length - 1] == "blue") {
        blues.push("blue");
        pileOfTowels.length--;
      }
      else if (pileOfTowels[pileOfTowels.length - 1] == "red") {
        reds.push("red");
        pileOfTowels.length--;
      }
    }
    
    for (let j=0; j<reds.length; j++)
      pileOfTowels.push("red");
    for (let k=0; k<blues.length; k++)
      pileOfTowels.push("blue");
  }
  return pileOfTowels;
}
