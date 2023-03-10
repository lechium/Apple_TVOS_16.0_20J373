//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserActivity.h>

@class NSDate, NSUUID;

@interface NSUserActivity (NSUserActivityCoreSpotlightInteraction)
+ (_Bool)_registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0020000000041738
+ (_Bool)_currentUserActivityProxiesWithOptions:(id)arg1 matching:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0020000000041a30
- (void)_sendToCoreSpotlightIndexer;	// IMP=0x001000000002848c
- (void)_updateForwardToCoreSpotlightIndexer:(BOOL)arg1;	// IMP=0x00100000000283ea
- (void)_setDirty:(_Bool)arg1 identifier:(id)arg2;	// IMP=0x0010000000028b75
- (void)_setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002891a
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(_Bool)arg4;	// IMP=0x0010000000028875
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;	// IMP=0x00100000000287e0
- (CDUnknownBlockType)_payloadUpdateBlockForIdentifier:(id)arg1;	// IMP=0x001000000002862c
- (id)_objectForIdentifier:(id)arg1;	// IMP=0x00100000000285a9
- (id)_payloadForIdentifier:(id)arg1;	// IMP=0x0010000000028526
- (void)_forceSave;	// IMP=0x00100000000417b3
- (_Bool)_finishUserInfoUpdate;	// IMP=0x00100000000416a2
- (unsigned long long)_beginUserInfoUpdate:(id)arg1;	// IMP=0x00100000000415f2
@property(getter=_isUniversalLink) _Bool _universalLink;
@property(readonly) unsigned long long _userInfoChangeCount;
- (id)_copyWithNewUUID;	// IMP=0x0010000000041408
@property(readonly, copy) NSDate *_sentToIndexerDate;
@property(readonly, copy) NSDate *_madeInitiallyCurrentDate;
@property(readonly) double _madeCurrentInterval;
@property(readonly, copy) NSDate *_madeCurrentEndDate;
@property(readonly, copy) NSDate *_madeCurrentDate;
@property(readonly, copy) NSUUID *_originalUniqueIdentifier;
- (id)_createUserActivityDataWithSaving:(_Bool)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000419a2
- (id)_createUserActivityStringsWithSaving:(_Bool)arg1 options:(id)arg2 string:(id *)arg3 optionalString:(id *)arg4 data:(id *)arg5 error:(id *)arg6;	// IMP=0x00100000000418fd
- (_Bool)doSaveUserActivityWithTimeout:(double)arg1 isCurrent:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000041b34
- (_Bool)_supportsSynchronizeActivityWithTimeout;	// IMP=0x0010000000041a49
@end

