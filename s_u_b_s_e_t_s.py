def _s_u_b_s_e_t_s( n ):

    stack = [0]

    stack[-1] = 1
    
    for i in range(0, len(stack)):

        if stack[i] > 0:

           print(stack[i], end = '\n')

    while not len(stack) == 0 :

        if stack[-1] < n:

           stack.append(stack[-1] + 1)

        else:

           stack.pop()

           if len(stack)!= 0:

              stack[-1] += 1


        for i in range(0, len(stack)):

           if stack[i] > 0:
            
              print(stack[i], end = ' ')

        print()              

def main():
	
	n = int(input())
	_s_u_b_s_e_t_s( n )
    
main()    
