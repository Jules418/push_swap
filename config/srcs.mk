SRCS= 			main.c \
					$(COMMON_SRCS)

TEST=			test_main.c \
					$(COMMON_SRCS)

COMMON_SRCS = 	$(NODE_SRCS) \
					$(DEQUE_SRCS) \
					$(PS_SRCS)

NODE_SRCS = node/node.c

DEQUE_SRCS = deque/deque_common_operations.c \
				deque/deque_manage.c \
				deque/deque_push_swap_op.c

PS_SRCS = push_swap_operations/ps_manage.c \
			push_swap_operations/ps_operations_r.c \
			push_swap_operations/ps_operations_rr.c \
			push_swap_operations/ps_operations_s_p.c