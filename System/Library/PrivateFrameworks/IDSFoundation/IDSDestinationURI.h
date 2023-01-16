//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSDestination.h"

@class IDSURI;

@interface IDSDestinationURI : IDSDestination
{
    IDSURI *_uri;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000c7000
- (void).cxx_destruct;	// IMP=0x00000000000c74c9
@property(readonly, nonatomic) IDSURI *uri; // @synthesize uri=_uri;
- (id)description;	// IMP=0x00000000000c7430
- (id)destinationLightweightStatus;	// IMP=0x00000000000c7360
- (id)destinationURIs;	// IMP=0x00000000000c72bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c72b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c7239
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c7141
- (id)initWithURIString:(id)arg1;	// IMP=0x00000000000c7076
- (id)initWithURI:(id)arg1;	// IMP=0x00000000000c7008

@end
