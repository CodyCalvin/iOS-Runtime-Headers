/* Generated by RuntimeBrowser.
 */

@protocol SignpostSupportLoggingSupportArchiveEvent <NSObject>

@required

- (unsigned long long)_machContinuousTimestamp;
- (int)processID;
- (NSString *)processImagePath;
- (NSUUID *)processImageUUID;
- (NSString *)processName;
- (unsigned long long)processUniqueID;
- (void)setProcessID:(int)arg1;
- (void)setProcessImagePath:(NSString *)arg1;
- (void)setProcessImageUUID:(NSUUID *)arg1;
- (void)setProcessName:(NSString *)arg1;
- (void)setProcessUniqueID:(unsigned long long)arg1;
- (void)setThreadID:(unsigned long long)arg1;
- (void)set_machContinuousTimestamp:(unsigned long long)arg1;
- (unsigned long long)threadID;

@end
