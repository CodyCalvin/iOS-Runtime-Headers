/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource> {
    CNContact * _contact;
    CNUIUserActionDisambiguationModeler * _modeler;
    CNCache * _models;
    <CNSchedulerProvider> * _schedulerProvider;
    bool  _tracksChanges;
}

@property (nonatomic, copy) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNUIUserActionDisambiguationModeler *modeler;
@property (nonatomic, retain) CNCache *models;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic) bool tracksChanges;

+ (id)allActionTypes;
+ (id)allSupportedActionTypes;
+ (id)allSupportedActionTypesWithCapabilities:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (id)displayNameForButtonForActionType:(id)arg1;
+ (id)displayNameForDisambiguationForActionType:(id)arg1;

- (void).cxx_destruct;
- (id)actionTypesForConsumer:(id)arg1;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(id /* block */)arg3;
- (id)consumer:(id)arg1 imageForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
- (id)contact;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 idsAvailabilityProvider:(id)arg2;
- (id)makeModelObservableForActionType:(id)arg1;
- (id)modeler;
- (id)models;
- (id)modelsForActionType:(id)arg1;
- (id)schedulerProvider;
- (void)setContact:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setModeler:(id)arg1;
- (void)setModels:(id)arg1;
- (void)setTracksChanges:(bool)arg1;
- (bool)shouldUseLabelForButtonWithDefaultAction:(id)arg1;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (bool)tracksChanges;

@end