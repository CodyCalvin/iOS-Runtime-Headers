/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExpressTransactionState : NSObject <NSSecureCoding> {
    NSString * _expressMode;
    bool  _processing;
    unsigned long long  _receivedEvents;
}

@property (nonatomic, copy) NSString *expressMode;
@property (nonatomic, readonly) long long expressType;
@property (getter=isProcessing, nonatomic) bool processing;
@property (nonatomic) unsigned long long receivedEvents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)expressMode;
- (long long)expressType;
- (id)initWithCoder:(id)arg1;
- (bool)isProcessing;
- (unsigned long long)receivedEvents;
- (void)setExpressMode:(id)arg1;
- (void)setProcessing:(bool)arg1;
- (void)setReceivedEvents:(unsigned long long)arg1;

@end
