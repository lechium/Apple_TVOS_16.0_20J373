//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString;
@protocol RMFileConduitDelegate;

@interface RMFileConduit : NSObject
{
    NSObject *_statusWritingLock;	// 8 = 0x8
    id <RMFileConduitDelegate> _delegate;	// 16 = 0x10
    NSManagedObjectContext *_context;	// 24 = 0x18
    NSManagedObjectID *_managementSourceObjectID;	// 32 = 0x20
}

+ (id)_generateEnrollmentToken;	// IMP=0x0020000000033911
- (void).cxx_destruct;	// IMP=0x00200000000367ff
@property(readonly, nonatomic) NSManagedObjectID *managementSourceObjectID; // @synthesize managementSourceObjectID=_managementSourceObjectID;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <RMFileConduitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000359ed
- (_Bool)_syncDeclarationsWithManagementSource:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000344be
- (void)updateWithTokensResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000344ae
- (void)updateWithPushMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003449e
- (_Bool)_syncWithManagementSource:(id)arg1 onlyIfNeeded:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000003438a
- (void)_syncOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000340bc
- (void)syncIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000034022
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033f8b
- (_Bool)isSyncAllowed;	// IMP=0x0010000000033d09
- (void)unenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033957
- (_Bool)_prepareDirectoryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000033578
- (void)enrollWithStatusItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032feb
- (id)statusItemsToSendDuringEnrollment;	// IMP=0x0010000000032dc8
- (id)statusItemsToImplicitlySubscribeTo;	// IMP=0x0010000000032d06
- (short)errorState;	// IMP=0x0010000000032b3c
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003291f
- (id)initWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2;	// IMP=0x001000000003286c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

