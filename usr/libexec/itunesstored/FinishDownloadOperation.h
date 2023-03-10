//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class FinishDownloadMemoryEntity, NSNumber, NSString;

@interface FinishDownloadOperation : ISOperation
{
    FinishDownloadMemoryEntity *_download;	// 96 = 0x60
    NSString *_handlerReleasedDownloadPhase;	// 104 = 0x68
    NSString *_initialDownloadPhase;	// 112 = 0x70
    CDUnknownBlockType _outputBlock;	// 120 = 0x78
    long long _stopResult;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0020000000173f88
- (id)_stepOperations;	// IMP=0x001000000017370a
- (id)_finishResult:(long long)arg1;	// IMP=0x00100000001736eb
- (void)_sendProgressToDelegate:(id)arg1;	// IMP=0x0010000000173671
- (_Bool)_needsDRMOperationForDownloadKind:(id)arg1;	// IMP=0x0010000000173609
- (id)_downloadSessionPropertiesWithDownloadPhase:(id)arg1;	// IMP=0x00100000001734b8
- (void)operation:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x0010000000173387
- (void)run;	// IMP=0x0010000000172586
- (void)stopWithFinishResult:(long long)arg1;	// IMP=0x0010000000172534
@property(copy) CDUnknownBlockType outputBlock;
@property(copy, nonatomic) NSString *initialDownloadPhase;
@property(copy, nonatomic) NSString *handlerReleasedDownloadPhase;
@property(readonly, nonatomic) NSNumber *rentalIdentifier;
@property(readonly, nonatomic) NSNumber *storeItemIdentifier;
@property(readonly, nonatomic) long long downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1 databaseSession:(id)arg2;	// IMP=0x0010000000172037

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

