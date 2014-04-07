pro idl_eq

numr=256
numz=256
numphi=512
pi=3.1415

loadct,39

rho=dblarr(numr,numz,numphi)
rho_eq=dblarr(numphi,numr)

openr,1,'density_math',/f77_unformatted,/swap_endian
readu,1,rho
close,1

;contour,rho(*,*,1)^0.2,nlevels=250,/fill

R=dblarr(numr)
theta=dblarr(numphi)

for i=0,numr-1 do begin
  R[i]=i
endfor

for i=0,numphi-1 do begin
  theta[i]=i*2*pi/(numphi-1.0) 
endfor


for i=0,numphi-1 do begin
  for j=0,numr-1 do begin
    rho_eq[i,j]=rho[j,2,i]   
  endfor
endfor

cc=indgen(210)+40

;Kundan thinks that Chris is dumb

polar_contour, rho_eq, theta, R, /DITHER, /fill, nlevels=210,$
	c_colors=cc

end
