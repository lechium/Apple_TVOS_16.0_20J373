//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSData, NSString, NSURL;

@interface CKDAcceptShareMetadata : NSObject
{
    _Bool _acceptedInProcess;	// 8 = 0x8
    NSURL *_shareURL;	// 16 = 0x10
    CKRecordID *_shareRecordID;	// 24 = 0x18
    NSString *_etag;	// 32 = 0x20
    NSData *_publicPCSData;	// 40 = 0x28
    NSString *_publicPCSEtag;	// 48 = 0x30
    NSData *_publicKey;	// 56 = 0x38
    unsigned long long _publicKeyVersion;	// 64 = 0x40
    NSString *_participantID;	// 72 = 0x48
    NSData *_pppcsProtectionInfo;	// 80 = 0x50
    NSString *_anonymousCKUserID;	// 88 = 0x58
    struct _PCSIdentityData *_signingPCSIdentity;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000265c87
@property(nonatomic) _Bool acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(nonatomic) struct _PCSIdentityData *signingPCSIdentity; // @synthesize signingPCSIdentity=_signingPCSIdentity;
@property(retain, nonatomic) NSString *anonymousCKUserID; // @synthesize anonymousCKUserID=_anonymousCKUserID;
@property(retain, nonatomic) NSData *pppcsProtectionInfo; // @synthesize pppcsProtectionInfo=_pppcsProtectionInfo;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(nonatomic) unsigned long long publicKeyVersion; // @synthesize publicKeyVersion=_publicKeyVersion;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSString *publicPCSEtag; // @synthesize publicPCSEtag=_publicPCSEtag;
@property(retain, nonatomic) NSData *publicPCSData; // @synthesize publicPCSData=_publicPCSData;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
- (void)dealloc;	// IMP=0x0000000000265b1d

@end

