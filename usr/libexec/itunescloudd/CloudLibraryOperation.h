//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CloudLibraryConnection, ICConnectionConfiguration, ICUserIdentity, ICUserIdentityStore, ML3MusicLibrary, NSError, NSObject, NSString;
@protocol OS_tcc_identity;

@interface CloudLibraryOperation : NSOperation
{
    _Bool _persistent;	// 8 = 0x8
    CloudLibraryConnection *_connection;	// 16 = 0x10
    NSString *_libraryIdentifier;	// 24 = 0x18
    ICConnectionConfiguration *_configuration;	// 32 = 0x20
    ICUserIdentity *_userIdentity;	// 40 = 0x28
    ICUserIdentityStore *_userIdentityStore;	// 48 = 0x30
    ML3MusicLibrary *_musicLibrary;	// 56 = 0x38
    NSObject<OS_tcc_identity> *_clientIdentity;	// 64 = 0x40
    long long _status;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000070dbb
- (void).cxx_destruct;	// IMP=0x0020000000070d24
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent; // @synthesize persistent=_persistent;
@property(readonly, nonatomic) NSObject<OS_tcc_identity> *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, nonatomic) ICUserIdentityStore *userIdentityStore; // @synthesize userIdentityStore=_userIdentityStore;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
@property(retain, nonatomic) CloudLibraryConnection *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x0010000000070bf8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000070b60
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000070a84
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2;	// IMP=0x001000000007092a
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000708c8
- (id)init;	// IMP=0x0010000000070888

@end

