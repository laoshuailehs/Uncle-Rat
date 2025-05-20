using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace BombGame
{
    public class PlayerAnimation : MonoBehaviour
    {
        private PlayerContor playerContor;
        private Animator animator;
        private Rigidbody2D rb;

        void Start()
        {
            playerContor = GetComponent<PlayerContor>();
            animator = GetComponent<Animator>();
            rb = GetComponent<Rigidbody2D>();
        }

        void FixedUpdate()
        {
            animator.SetFloat("speed", Mathf.Abs(rb.velocity.x));
            animator.SetFloat("jumpf", rb.velocity.y);
            animator.SetBool("fall", rb.velocity.y < 0);
            animator.SetFloat("health",GameGlobalSettings.Instance.Health);
        }
    }
}