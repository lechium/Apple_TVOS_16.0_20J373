//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSDestination.h"

@class IDSURI;

@interface IDSDestinationDevice : IDSDestination
{
    IDSURI *_destinationURI;	// 8 = 0x8
    _Bool _isGuest;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001928a9
+ (_Bool)isDeviceURI:(id)arg1;	// IMP=0x00600000001924e0
- (void).cxx_destruct;	// IMP=0x0000000000192a49
@property(nonatomic) _Bool isGuest; // @synthesize isGuest=_isGuest;
@property(retain, nonatomic) IDSURI *destinationURI; // @synthesize destinationURI=_destinationURI;
- (id)destinationURIs;	// IMP=0x0000000000192980
- (_Bool)isDevice;	// IMP=0x0000000000192978
- (id)description;	// IMP=0x00000000001928b1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019280c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000192762
- (id)initWithURI:(id)arg1 isGuest:(_Bool)arg2;	// IMP=0x00000000001926e2
- (id)initWithDeviceURI:(id)arg1;	// IMP=0x0000000000192667
- (id)initWithIDSDeviceURI:(id)arg1;	// IMP=0x00000000001925a6
- (id)initWithRapportPublicIdentifierURI:(id)arg1;	// IMP=0x00000000001924fc

@end
