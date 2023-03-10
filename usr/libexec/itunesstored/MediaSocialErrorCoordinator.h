//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;
@protocol MediaSocialErrorDelegate, OS_dispatch_queue;

@interface MediaSocialErrorCoordinator : NSObject
{
    id <MediaSocialErrorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    id _notification;	// 24 = 0x18
    NSMutableOrderedSet *_postIDs;	// 32 = 0x20
    NSArray *_temporaryPostIDs;	// 40 = 0x28
    NSArray *_temporaryUploadIDs;	// 48 = 0x30
    NSMutableOrderedSet *_uploadIDs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000ff860
@property(nonatomic) __weak id <MediaSocialErrorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showDialog:(id)arg1;	// IMP=0x00100000000ff6a4
- (void)_sendDidFinishWithResponseFlags:(unsigned long long)arg1;	// IMP=0x00100000000ff5ad
- (id)_newErrorDialogWithServerMessageWithPost:(id)arg1 erroMessage:(id)arg2 canRetry:(_Bool)arg3;	// IMP=0x00100000000ff13c
- (id)_newSingleErrorDialogWithUpload:(id)arg1;	// IMP=0x00100000000fed9f
- (id)_newSingleErrorDialogWithPost:(id)arg1;	// IMP=0x00100000000fe9b8
- (id)_newPluralErrorDialogWithUploadCount:(long long)arg1;	// IMP=0x00100000000fe906
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1 uploadCount:(long long)arg2;	// IMP=0x00100000000fe5e4
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1;	// IMP=0x00100000000fe532
- (id)_newPluralErrorDialogWithCount:(long long)arg1 formatString:(id)arg2;	// IMP=0x00100000000fe277
@property(readonly, copy, nonatomic) NSArray *uploadIdentifiers;
@property(readonly, copy, nonatomic) NSArray *postIdentifiers;
- (void)dismissAllDialogs;	// IMP=0x00100000000fe14f
- (_Bool)addDialogForUploadIdentifiers:(id)arg1;	// IMP=0x00100000000fe01b
- (_Bool)addDialogForUpload:(id)arg1;	// IMP=0x00100000000fdebd
- (_Bool)addDialogForPost:(id)arg1 errorMessage:(id)arg2 canRetry:(_Bool)arg3;	// IMP=0x00100000000fddb0
- (_Bool)addDialogForPost:(id)arg1;	// IMP=0x00100000000fdc4b
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x00100000000fdbe0

@end

