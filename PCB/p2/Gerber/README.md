# Gerber files for p2

The BOM and SMT placement file (CPL) are formatted for use with JLCPCB. All the parts can be populated by JLCPCB at the time of writing, however the availability of parts depends on external factors.

## JLCPCB Configuration

If you want to order PCBs from JLC-PCB with the provided gerber-files, use the following settings after uploading the zipped gerber folder:

- Layers: 2
- Dimension: 377.8 mm x 135.7 mm
- PCB Color: Choose what you want
- PCB Thickness: 1.6
- Impedance: no
- Surface Finish: LeadFree HASL-RoHS (although up to you)
- Copper Weight: 1
- Gold Fingers: No
- Material Details: FR4-Standard Tg 130-140C
- Panel By JLCPCB: No
- Flying Probe Test: Fully Test
- Castellated Holes: no
- Different Design: 1
- Remove Order Number: Specify a location

5 PCBs without assembly cost is about $36 CAD.

If you want to have the SMT parts populated, choose "SMT Assembly" and select "Bottom Layer".
When asked for the BOM and CPL file, upload the provided files.

Assembly and parts for 5 PCBs will cost approximately $250 CAD.

### Expected Corrected SMD preview from JLCPCB

![photo](../../../Photos/2nd_prototype/p2_jlc_smd.png)