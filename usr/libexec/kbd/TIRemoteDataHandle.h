//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TITextCheckerExemptions;

@interface TIRemoteDataHandle : NSObject
{
    TITextCheckerExemptions *_textCheckerExemptions;	// 8 = 0x8
}

+ (id)localizedStringForKey:(id)arg1;	// IMP=0x000000000000b3c3
+ (id)localDictionaryPath;	// IMP=0x001000000000b159
+ (_Bool)shouldAcceptRequestForMeCardWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x00100000000099ef
- (void).cxx_destruct;	// IMP=0x002000000000b93c
- (void)alternativesForText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b826
- (void)updateKeyboardType:(unsigned long long)arg1 appIdentifier:(id)arg2;	// IMP=0x001000000000b731
- (void)updateForActiveLocaleIdentifiers:(id)arg1;	// IMP=0x001000000000b64b
- (void)performTrainingForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b5c1
- (void)appendWordToTextCheckerLocalDictionary:(id)arg1;	// IMP=0x001000000000b27c
- (void)requestTextCheckerLocalDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b1b7
- (void)string:(id)arg1 isExemptFromTextCheckerWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b066
@property(readonly, nonatomic) TITextCheckerExemptions *textCheckerExemptions; // @synthesize textCheckerExemptions=_textCheckerExemptions;
- (void)removeAllDynamicDictionariesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ad87
- (void)dismissedDataSharingWithResponse:(long long)arg1;	// IMP=0x001000000000ad81
- (void)dismissDialogWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000abee
- (id)notificationDetailsForType:(long long)arg1;	// IMP=0x001000000000a7c9
- (void)presentDialogForType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a3ae
- (void)launchPencilSettings;	// IMP=0x001000000000a313
- (void)launchDictationSettings;	// IMP=0x001000000000a300
- (void)launchKeyboardSettings;	// IMP=0x001000000000a187
- (void)requestMeContactWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009f41
- (void)requestMeCardWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009c6b
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009bd2
- (void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000009ab2
- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000099f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

