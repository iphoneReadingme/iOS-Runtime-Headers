/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSURLConnection, NSData, NSError;

@interface QLThreadInvoker : NSObject  {
    NSURLConnection *_connection;
    NSData *_data;
    NSError *_error;
}


- (void)connectionDidFailWithError:(id)arg1;
- (id)initWithConnection:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)connectionDidReceiveDataLengthReceived:(id)arg1;
- (void)connectionDidReceiveData:(id)arg1;
- (void)dealloc;

@end