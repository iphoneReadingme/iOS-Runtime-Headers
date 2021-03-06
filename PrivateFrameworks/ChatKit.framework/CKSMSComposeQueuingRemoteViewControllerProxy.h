/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, XPCProxy<CKSMSCompose>;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject {
    NSMutableArray *_queuedInvocations;
    XPCProxy<CKSMSCompose> *_serviceViewControllerProxy;
}

@property(retain) NSMutableArray * queuedInvocations;
@property(retain) XPCProxy<CKSMSCompose> * serviceViewControllerProxy;

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)queuedInvocations;
- (id)serviceViewControllerProxy;
- (void)setQueuedInvocations:(id)arg1;
- (void)setServiceViewControllerProxy:(id)arg1;

@end
