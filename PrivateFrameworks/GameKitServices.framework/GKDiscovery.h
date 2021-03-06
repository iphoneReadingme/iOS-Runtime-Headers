/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class GKDiscoveryManager;

@interface GKDiscovery : NSObject {
    GKDiscoveryManager *_manager;
}

@property(retain) GKDiscoveryManager * manager;
@property(copy) id playerFoundHandler;
@property(copy) id playerLostHandler;
@property(copy) id receiveDataHandler;

- (void)dealloc;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (id)init;
- (id)manager;
- (id)playerFoundHandler;
- (id)playerLostHandler;
- (id)receiveDataHandler;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(id)arg4;
- (void)setManager:(id)arg1;
- (void)setPlayerFoundHandler:(id)arg1;
- (void)setPlayerLostHandler:(id)arg1;
- (void)setReceiveDataHandler:(id)arg1;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)stopAdvertising;
- (void)stopBrowsing;

@end
