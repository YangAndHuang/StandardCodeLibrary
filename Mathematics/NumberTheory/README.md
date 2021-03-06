# Number Theory



[TOC]



## Contents

| Contents                           | Time      | Memory | Code | Test |
| ---------------------------------- | --------- | ------ | ---- | ---- |
| Modular Operator (+, -, *, ^, mod) | $/$       | $/$    | OK!  |      |
| GCD & LCM (Euclid Method)          | $O(logN)$ | $/$    | OK!  |      |
| Extend Euclid                      | $O(logN)$ | /      |      |      |
| Prime Table (basic, bitmap)        |           |        |      |      |
| Is Prime (basic, Miller-Robin)     |           |        |      |      |
| Factorization                      |           |        |      |      |
| Phi Function / Phi Table           |           |        |      |      |
| Inverse Element / Modular Division |           |        |      |      |
| Power Reduction Formula            |           |        |      |      |
| Chinese Remainder Theory           |           |        |      |      |
| Modular Linear Equations           |           |        |      |      |
| Lucas Theory / Extend Lucas Theory |           |        |      |      |
|                                    |           |        |      |      |





## Modular Operator

1.  $(a \pm b)\%M = ((a\%M) \pm (b\%M))\%M$
2.  $(ab)\%M = ((a\%M) \dot (b\%M))\%M$
3.  