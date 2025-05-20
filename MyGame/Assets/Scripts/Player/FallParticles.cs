using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace BombGame
{
    public class FallParticles : MonoBehaviour
    {
        public void Hide()
        {
            transform.gameObject.SetActive(false);
        }

        public void Show()
        {
            transform.gameObject.SetActive(true);
        }
    }
}