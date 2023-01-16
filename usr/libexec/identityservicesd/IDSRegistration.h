//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;
@protocol FTPasswordManager;

@interface IDSRegistration : NSObject
{
    _Bool _needsMigration;	// 8 = 0x8
    _Bool _needsProvisioning;	// 9 = 0x9
    _Bool _needsRenewal;	// 10 = 0xa
    _Bool _runningSimpleAuthentication;	// 11 = 0xb
    _Bool _isDisabled;	// 12 = 0xc
    _Bool _shouldRegisterUsingDSHandle;	// 13 = 0xd
    _Bool _shouldAutoRegisterAllHandles;	// 14 = 0xe
    _Bool _shouldReregOnManateeAvailability;	// 15 = 0xf
    int _registrationType;	// 16 = 0x10
    int _retries;	// 20 = 0x14
    int _absintheRetries;	// 24 = 0x18
    int _manateeRetries;	// 28 = 0x1c
    NSArray *_vettedEmails;	// 32 = 0x20
    NSString *_dsHandle;	// 40 = 0x28
    NSString *_profileID;	// 48 = 0x30
    NSNumber *_IDSVersion;	// 56 = 0x38
    NSNumber *_applicationVersion;	// 64 = 0x40
    NSString *_environment;	// 72 = 0x48
    NSDate *_registrationDate;	// 80 = 0x50
    NSDate *_nextRegistrationDate;	// 88 = 0x58
    NSData *_pushToken;	// 96 = 0x60
    NSNumber *_isC2K;	// 104 = 0x68
    long long _registrationStatus;	// 112 = 0x70
    NSString *_mainID;	// 120 = 0x78
    NSArray *_dependentRegistrations;	// 128 = 0x80
    NSString *_regionID;	// 136 = 0x88
    NSString *_deviceName;	// 144 = 0x90
    NSString *;	// 152 = 0x98
    NSDictionary *_regionServerContext;	// 160 = 0xa0
    NSData *_registrationCert;	// 168 = 0xa8
    NSString *_serviceType;	// 176 = 0xb0
    NSString *_guid;	// 184 = 0xb8
    NSMutableArray *_candidateEmails;	// 192 = 0xc0
    NSDictionary *_migrationContext;	// 200 = 0xc8
    NSNumber *_identityVersion;	// 208 = 0xd0
    NSString *_keyPairSignature;	// 216 = 0xd8
    NSString *_idsUserID;	// 224 = 0xe0
    NSString *_serviceIdentifier;	// 232 = 0xe8
    NSArray *_uris;	// 240 = 0xf0
    NSArray *_adHocServiceNames;	// 248 = 0xf8
    NSString *_temporaryPhoneEmail;	// 256 = 0x100
    NSDate *_dependentRegistrationsTTL;	// 264 = 0x108
    NSNumber *_dependentRegistrationResponseCode;	// 272 = 0x110
    NSNumber *_dependentRegistrationAuthRetries;	// 280 = 0x118
    NSArray *_keyTransparencyEnrolledURIs;	// 288 = 0x120
    NSString *_userUniqueIdentifier;	// 296 = 0x128
    NSDictionary *_contextInfo;	// 304 = 0x130
    id <FTPasswordManager> _passwordManager;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00100000006ca900
@property(retain, nonatomic) id <FTPasswordManager> passwordManager; // @synthesize passwordManager=_passwordManager;
@property(retain, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(retain, nonatomic) NSString *userUniqueIdentifier; // @synthesize userUniqueIdentifier=_userUniqueIdentifier;
@property(nonatomic) int manateeRetries; // @synthesize manateeRetries=_manateeRetries;
@property(nonatomic) _Bool shouldReregOnManateeAvailability; // @synthesize shouldReregOnManateeAvailability=_shouldReregOnManateeAvailability;
@property(copy, nonatomic) NSArray *keyTransparencyEnrolledURIs; // @synthesize keyTransparencyEnrolledURIs=_keyTransparencyEnrolledURIs;
@property(copy, nonatomic) NSNumber *dependentRegistrationAuthRetries; // @synthesize dependentRegistrationAuthRetries=_dependentRegistrationAuthRetries;
@property(copy, nonatomic) NSNumber *dependentRegistrationResponseCode; // @synthesize dependentRegistrationResponseCode=_dependentRegistrationResponseCode;
@property(copy, nonatomic) NSDate *dependentRegistrationsTTL; // @synthesize dependentRegistrationsTTL=_dependentRegistrationsTTL;
@property(retain, nonatomic) NSString *temporaryPhoneEmail; // @synthesize temporaryPhoneEmail=_temporaryPhoneEmail;
@property(retain, nonatomic) NSArray *adHocServiceNames; // @synthesize adHocServiceNames=_adHocServiceNames;
@property(nonatomic) _Bool shouldAutoRegisterAllHandles; // @synthesize shouldAutoRegisterAllHandles=_shouldAutoRegisterAllHandles;
@property(nonatomic) _Bool shouldRegisterUsingDSHandle; // @synthesize shouldRegisterUsingDSHandle=_shouldRegisterUsingDSHandle;
@property(copy, nonatomic) NSArray *uris; // @synthesize uris=_uris;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSString *idsUserID; // @synthesize idsUserID=_idsUserID;
@property(copy, nonatomic) NSString *keyPairSignature; // @synthesize keyPairSignature=_keyPairSignature;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool runningSimpleAuthentication; // @synthesize runningSimpleAuthentication=_runningSimpleAuthentication;
@property(copy, nonatomic) NSNumber *identityVersion; // @synthesize identityVersion=_identityVersion;
@property(retain, nonatomic) NSDictionary *migrationContext; // @synthesize migrationContext=_migrationContext;
@property(retain, nonatomic) NSMutableArray *_candidateEmails; // @synthesize _candidateEmails;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSData *registrationCert; // @synthesize registrationCert=_registrationCert;
@property(copy, nonatomic) NSDictionary *regionServerContext; // @synthesize regionServerContext=_regionServerContext;
@property(copy, nonatomic) NSString *regionBasePhoneNumber; // @synthesize regionBasePhoneNumber=_regionBasePhoneNumber;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *regionID; // @synthesize regionID=_regionID;
@property(copy, nonatomic) NSArray *dependentRegistrations; // @synthesize dependentRegistrations=_dependentRegistrations;
@property(copy, nonatomic) NSString *mainID; // @synthesize mainID=_mainID;
@property(nonatomic) int absintheRetries; // @synthesize absintheRetries=_absintheRetries;
@property(nonatomic) int retries; // @synthesize retries=_retries;
@property(nonatomic) int registrationType; // @synthesize registrationType=_registrationType;
@property(nonatomic) long long registrationStatus; // @synthesize registrationStatus=_registrationStatus;
@property(nonatomic) _Bool needsRenewal; // @synthesize needsRenewal=_needsRenewal;
@property(nonatomic) _Bool needsProvisioning; // @synthesize needsProvisioning=_needsProvisioning;
@property(nonatomic) _Bool needsMigration; // @synthesize needsMigration=_needsMigration;
@property(copy, nonatomic) NSNumber *isCDMA; // @synthesize isCDMA=_isC2K;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSDate *nextRegistrationDate; // @synthesize nextRegistrationDate=_nextRegistrationDate;
@property(copy, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSNumber *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSNumber *IDSVersion; // @synthesize IDSVersion=_IDSVersion;
@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
@property(retain, nonatomic, setter=setDSHandle:) NSString *dsHandle; // @synthesize dsHandle=_dsHandle;
@property(retain, nonatomic) NSArray *vettedEmails; // @synthesize vettedEmails=_vettedEmails;
@property(copy, nonatomic) NSData *authenticationCert;
@property(readonly, nonatomic) _Bool stopAtAuthentication;
@property(readonly, nonatomic) _Bool canSendRegistration;
@property(readonly, nonatomic) _Bool canRegister;
@property(readonly, nonatomic) _Bool hasSentinel;
@property(readonly, nonatomic) NSArray *emailsToRegister;
- (id)debugDescription;	// IMP=0x00100000006c62d0
- (id)description;	// IMP=0x00100000006c5da0
- (id)_userStore;	// IMP=0x00100000006c5d00
- (id)_user;	// IMP=0x00100000006c5c80
- (void)voidPassword;	// IMP=0x00100000006c5910
- (void)voidAuthenticationTokenAllowingGracePeriod;	// IMP=0x00100000006c56d0
@property(copy, nonatomic) NSString *authenticationToken;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006c3730
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation; // @dynamic dictionaryRepresentation;
@property(copy, nonatomic) NSString *phoneNumber;
@property(copy, nonatomic) NSString *email;
@property(readonly, nonatomic) NSString *userID;
- (id)_userID;	// IMP=0x00100000006c18f0
@property(readonly, nonatomic) NSArray *confirmedEmails;
- (void)removeCandidateEmail:(id)arg1;	// IMP=0x00100000006c1770
- (void)addCandidateEmail:(id)arg1;	// IMP=0x00100000006c1650
@property(readonly, nonatomic) NSArray *candidateEmails;
- (_Bool)saveToKeychain;	// IMP=0x00100000006c15d0
- (_Bool)removeFromKeychain;	// IMP=0x00100000006c1570
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000006bb320
- (id)init;	// IMP=0x00100000006bb290
- (id)initWithPasswordManager:(id)arg1;	// IMP=0x00100000006bb190
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006bb170
- (id)_keychain_comparisonValue;	// IMP=0x0010000000382390
- (_Bool)_keychain_isEqual:(id)arg1;	// IMP=0x0010000000382130

@end

