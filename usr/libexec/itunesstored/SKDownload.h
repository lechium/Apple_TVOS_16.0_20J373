//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (void)deleteContentForProductID:(id)arg1;	// IMP=0x0040000000012480
+ (id)contentURLForProductID:(id)arg1;	// IMP=0x0010000000012478
- (void).cxx_destruct;	// IMP=0x0020000000012818
- (id)copyXPCEncoding;	// IMP=0x001000000001270c
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0010000000012486
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001233d
- (void)_setVersion:(id)arg1;	// IMP=0x001000000001230c
- (void)_setTransaction:(id)arg1;	// IMP=0x001000000001226b
- (void)_setTimeRemaining:(double)arg1;	// IMP=0x001000000001225c
- (void)_setProgress:(float)arg1;	// IMP=0x001000000001224d
- (void)_setError:(id)arg1;	// IMP=0x001000000001221c
- (void)_setDownloadState:(long long)arg1;	// IMP=0x001000000001220e
- (void)_setContentURL:(id)arg1;	// IMP=0x00100000000121dd
- (void)_setContentLength:(id)arg1;	// IMP=0x00100000000121ac
- (void)_setContentIdentifier:(id)arg1;	// IMP=0x001000000001217b
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
- (void)_applyChangeset:(id)arg1;	// IMP=0x0010000000011f82
@property(readonly, nonatomic) SKPaymentTransaction *transaction;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *contentVersion;
@property(readonly, nonatomic) long long contentLength;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSURL *contentURL;
@property(readonly, nonatomic) long long downloadState;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) NSString *contentIdentifier;
- (id)init;	// IMP=0x0010000000011e53

@end

