#!/bin/bash

	head -1 data/sample_big.vcf | cut -f -9
	echo

	head -20 data/sample_big.vcf | tail -1 | cut -f 10- \
		| tr '\t' '\n' | sort | uniq -c | sort -n
	echo

	head -20 data/sample_big.vcf | tail -1 | cut -f 10- \
		| tr '\t' '\n' | sort | uniq -c | sort -n \
		| awk '{print $1/25.04}'


exit 0

