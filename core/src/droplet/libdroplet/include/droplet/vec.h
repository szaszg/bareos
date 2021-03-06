/*
 * Copyright (C) 2010 SCALITY SA. All rights reserved.
 * http://www.scality.com
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY SCALITY SA ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL SCALITY SA OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation
 * are those of the authors and should not be interpreted as representing
 * official policies, either expressed or implied, of SCALITY SA.
 *
 * https://github.com/scality/Droplet
 */
#ifndef __DROPLET_VEC_H__
#define __DROPLET_VEC_H__ 1

typedef struct dpl_vec
{
  dpl_value_t **items;
  int n_items;
  int size;
  int incr_size;
} dpl_vec_t;

/* PROTO vec.c */
/* src/vec.c */
void dpl_vec_free(dpl_vec_t *vec);
dpl_vec_t *dpl_vec_new(int init_size, int incr_size);
dpl_status_t dpl_vec_add_value(dpl_vec_t *vec, dpl_value_t *value);
dpl_status_t dpl_vec_add(dpl_vec_t *vec, void *item);
void *dpl_vec_get(dpl_vec_t *vec, int i);
void dpl_vec_print(dpl_vec_t *vec, FILE *f, int level);
dpl_vec_t *dpl_vec_dup(dpl_vec_t *vec);
void dpl_vec_sort(dpl_vec_t *vec, dpl_value_cmp_func_t cmp_func);
#endif
