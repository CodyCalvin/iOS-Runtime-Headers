/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAFmfVisibilitySetCompleted : SADomainCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;
@property(copy) NSURL * searchContext;

+ (id)visibilitySetCompleted;
+ (id)visibilitySetCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;

@end