# MetaPhlAn
# Language: C++ (Generated by PluGen)
# Input: FASTQ (sequence data)
# Output: TXT (Abundance profile)
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependency: MetaPhlAn 3 (https://huttenhower.sph.harvard.edu/metaphlan3)

PluMA plugin that will takes sequence data and produces an abundance
profile using MetaPhlAn (Truong et al, 2015).

The plugin requires its lead script (metaphlan.py) to be in the system PATH.

Note: demo.fastq (in the example/ directory) is from the HumanN repository
(available here: https://huttenhower.sph.harvard.edu/humann)
