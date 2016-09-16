Inspired by ARAGÓN ARTACHO, Francisco J., et al. "Walking on real numbers". The Mathematical Intelligencer. Vol. 35, Issue 1 (March 2013). ISSN 0343-6993, pp. 42-60

# Walking on nucleotides

ARAGÓN ARTACHO, Francisco J., et al. present new ways to visualize large mathematical datasets. In particular the paper goes into trying to visualize and tell if a real number is "Normal".

”A real constant α is b-normal if, given the positive integer b ≥ 2, every m-long string of base-b digits appears in the base-b expansion of α with precisely the expected limiting frequency 1/b^m"

The paper shows visualization of many base 4 numbers. The authors also go on to suggest applying this visualization technique to genome comparisons. 

# Visualization

A walk for a base 4 number consists of steps, where at each step the path moves one unit east, north, west or south, depending on the whether the
number at that position is 0, 1, 2 or 3.  

I've applied this visualization technique to DNA. DNA consists of 4 nucleotides denoted by A, T, G and C. For each of these nucleotides, I assigned a direction to the step - North, East, South and West respectively.
Instead of the HSV color scheme used in the paper, that generates a rainbow color, I've used fixed colors for each nucleotide to get an idea of the nucleotide content in the sequence which is of value in Biology.

### Color Scheme

* A - #D9042B
* T - #03588C
* G - #F29F05
* C - #F24B0F

I picked up the color scheme from Adobe Color - https://color.adobe.com/Madrid---Carabanchel-color-theme-8586545/

# Usage

```
./draw_potrait.sh <path to fasta sequence file>
```

By default I've assumed this folder structure, 

```
.
├── coords
├── data
└── potraits
```

* potraits contains the final potraits. 
* data contains the fasta files.
* coords contains intermediate coordinate files that the C script dna_potrait generates. 

# Benchmarks

The script takes less than 0.5s to generate potraits of lengths ranging from 10000 to 20000 nucleotides(The human genome is roughly 3 billion nucleotides in length). More robust benchmarks coming soon... 
