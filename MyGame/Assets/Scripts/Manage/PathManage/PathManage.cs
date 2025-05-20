using System.IO;
using UnityEngine;
using UnityEngine.Networking;

namespace BombGame
{
    public class PathManage:LSingletonManager<PathManage>
    {
        public override void OnNew()
        {
            
        }
        
        public string GetJsonPath() {
#if UNITY_EDITOR
            return Path.Combine(Application.dataPath, "Resources/Config/playerGame.json");
#elif UNITY_ANDROID
    // 安卓：首次运行时从StreamingAssets拷贝到PersistentDataPath
    string targetPath = Path.Combine(Application.persistentDataPath, "playerGame.json");
    if (!File.Exists(targetPath)) {
        string originPath = Path.Combine(Application.streamingAssetsPath, "playerGame.json");
        UnityWebRequest www = UnityWebRequest.Get(originPath);
        www.SendWebRequest();
        while (!www.isDone) { /* 等待 */ }
        File.WriteAllText(targetPath, www.downloadHandler.text);
    }
    return targetPath;
#else
    return Path.Combine(Application.persistentDataPath, "playerGame.json");
#endif
        }
        
        public readonly string JsonDataPath= Application.dataPath  + "/Resources/Config/playerGame.json";
        
    }
}