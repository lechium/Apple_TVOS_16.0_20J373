//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSBundleProxy, NSString, SFAirDropTransfer;

@interface SDAirDropHandler : NSObject
{
    _Bool _hasFiles;	// 8 = 0x8
    _Bool _hasLinks;	// 9 = 0x9
    _Bool _isActivated;	// 10 = 0xa
    _Bool _handlingAppInstalled;	// 11 = 0xb
    SFAirDropTransfer *_transfer;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    LSBundleProxy *_bundleProxy;	// 32 = 0x20
    NSString *_handlingAppBundleID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000077f2
@property(retain, nonatomic) NSString *handlingAppBundleID; // @synthesize handlingAppBundleID=_handlingAppBundleID;
@property(nonatomic) _Bool handlingAppInstalled; // @synthesize handlingAppInstalled=_handlingAppInstalled;
@property(retain, nonatomic) LSBundleProxy *bundleProxy; // @synthesize bundleProxy=_bundleProxy;
@property(nonatomic) _Bool isActivated; // @synthesize isActivated=_isActivated;
@property(readonly, nonatomic) _Bool hasLinks; // @synthesize hasLinks=_hasLinks;
@property(readonly, nonatomic) _Bool hasFiles; // @synthesize hasFiles=_hasFiles;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) SFAirDropTransfer *transfer; // @synthesize transfer=_transfer;
- (_Bool)openURLs:(id)arg1;	// IMP=0x001000000000773e
- (_Bool)openURLs:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000000704d
- (void)removeItemAtURLToFreeUpSpace:(id)arg1;	// IMP=0x0010000000006f7d
- (void)logReceiverBundleID:(id)arg1 forAppProxy:(id)arg2 andURL:(id)arg3;	// IMP=0x0010000000006d9f
@property(readonly, copy, nonatomic) NSString *senderName;
- (id)bundleProxyFromCandidateIdentifiers:(id)arg1 handlesURL:(id)arg2;	// IMP=0x001000000000699c
- (id)alertMessageLocalizedKeyForTypeDicts:(id)arg1;	// IMP=0x0010000000006509
@property(readonly, nonatomic) unsigned long long totalSharedItemsCount;
@property(readonly, nonatomic) _Bool isJustLinks;
@property(readonly, nonatomic) _Bool isJustFiles;
- (id)applicationProxyForBundleProxy:(id)arg1;	// IMP=0x00100000000062eb
- (id)defaultActionForBundleProxy:(id)arg1;	// IMP=0x0010000000006171
- (void)prepareForAccept;	// IMP=0x001000000000616b
- (void)prepareOrPerformOpenAction;	// IMP=0x0010000000005e4a
- (void)updatePossibleActions;	// IMP=0x0010000000005cc3
- (id)cancelActionTitleToAccompanyActions:(id)arg1;	// IMP=0x0010000000005c4f
@property(readonly, copy, nonatomic) NSString *singleItemActionTitle;
@property(readonly, nonatomic) NSString *suitableContentsDescription;
@property(readonly, nonatomic) NSString *suitableContentsTitle;
- (long long)transferTypes;	// IMP=0x0010000000005c03
@property(readonly, nonatomic) _Bool canHandleTransfer;
- (void)lockStatusChanged:(id)arg1;	// IMP=0x0010000000005be9
- (void)removeStatusMonitorObservers;	// IMP=0x0010000000005b96
- (void)addStatusMonitorObservers;	// IMP=0x0010000000005b2f
- (void)triggerSelectedActionIfAppropriate;	// IMP=0x0010000000005757
- (void)actionSelected:(id)arg1;	// IMP=0x00100000000052e6
- (void)transferUpdated;	// IMP=0x00100000000050b7
- (id)description;	// IMP=0x0010000000004f7d
- (void)activate;	// IMP=0x0010000000004ed6
- (void)dealloc;	// IMP=0x0010000000004e84
- (id)initWithTransfer:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0010000000004bc4
- (id)initWithTransfer:(id)arg1;	// IMP=0x0010000000004bb0
- (id)init;	// IMP=0x0010000000004b08

@end

