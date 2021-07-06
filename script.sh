#!/bin/bash
ls
expect -f expect.expect

mv resultados.root bkg2.root

ls
sed -i 's/tttata_noh_l_vl_5M/nuevo/g' expect.expect
sed -i 's/tt_zp_tata_noh_l_vl_350/viejo/g' expect.expect
sed -i 's/nuevo/tt_h_l_vl_5M/g' expect.expect
sed -i 's/viejo/tttata_noh_l_vl_5M/g' expect.expect

expect -f expect.expect

mv resultados.root bkg1.root

sed -i 's/tt_h_l_vl_5M/nuevo/g' expect.expect
sed -i 's/tttata_noh_l_vl_5M/viejo/g' expect.expect
sed -i 's/nuevo/tt_zp_tata_noh_l_vl/g' expect.expect
sed -i 's/viejo/tt_h_l_vl_5M/g' expect.expect

expect -f expect.expect

mv resultados.root signal2.root


sed -i 's/tt_zp_tata_noh_l_vl/nuevo/g' expect.expect
sed -i 's/tt_h_l_vl_5M/viejo/g' expect.expect
sed -i 's/nuevo/tt_zp_tata_noh_l_vl_350/g' expect.expect
sed -i 's/viejo/tt_zp_tata_noh_l_vl/g' expect.expect

expect -f expect.expect

mv resultados.root signal1.root

#MASAS ALTAS

expect -f expect2.expect

mv resultados.root signal3.root

sed -i 's/tt_zp_tata_noh_l_vl_1500/nuevo/g' expect2.expect
sed -i 's/tt_zp_tata_noh_l_vl_125/viejo/g' expect2.expect
sed -i 's/nuevo/tt_zp_tata_noh_l_vl_2000/g' expect2.expect
sed -i 's/viejo/tt_zp_tata_noh_l_vl_1500/g' expect2.expect

expect -f expect2.expect

mv resultados.root signal4.root

sed -i 's/tt_zp_tata_noh_l_vl_2000/nuevo/g' expect2.expect
sed -i 's/tt_zp_tata_noh_l_vl_1500/viejo/g' expect2.expect
sed -i 's/nuevo/tt_zp_tata_noh_l_vl_125/g' expect2.expect
sed -i 's/viejo/tt_zp_tata_noh_l_vl_2000/g' expect2.expect

expect -f expect2.expect

mv resultados.root 125.root
root plots.cxx << EOF
.q
EOF

sed -i 's/tt_zp_tata_noh_l_vl_350/nuevo/g' expect.expect
sed -i 's/tt_zp_tata_noh_l_vl/viejo/g' expect.expect
sed -i 's/nuevo/tttata_noh_l_vl_5M/g' expect.expect
sed -i 's/viejo/tt_zp_tata_noh_l_vl_350/g' expect.expect


sed -i 's/tt_zp_tata_noh_l_vl_125/nuevo/g' expect2.expect
sed -i 's/tt_zp_tata_noh_l_vl_2500/viejo/g' expect2.expect
sed -i 's/nuevo/tt_zp_tata_noh_l_vl_1500/g' expect2.expect
sed -i 's/viejo/tt_zp_tata_noh_l_vl_125/g' expect2.expect
#**************************************************************

