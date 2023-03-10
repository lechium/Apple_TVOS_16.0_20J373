//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (CDXTicket)
+ (id)dataWithSockAddr:(const struct sockaddr *)arg1;	// IMP=0x0080000000066e84
- (_Bool)CDXTicketIsRelatedToTicket:(id)arg1;	// IMP=0x001000000000374c
- (_Bool)CDXTicketWellFormed;	// IMP=0x00100000000036ac
- (id)CDXTicketTrimmed;	// IMP=0x0010000000003668
- (_Bool)CDXTicketIsStub;	// IMP=0x0010000000003631
- (_Bool)CDXTicketIsHolePunch;	// IMP=0x0010000000003617
- (_Bool)CDXTicketIsReflected;	// IMP=0x0010000000003600
- (unsigned long long)CDXTicketSID;	// IMP=0x00100000000035df
- (struct CDXTicket *)mutableCDXTicket;	// IMP=0x00100000000035cd
- (const struct CDXTicket *)CDXTicket;	// IMP=0x00100000000035bb
- (unsigned long long)CDXTicketRevision;	// IMP=0x001000000000359d
- (id)CDXTicketExpirationDate;	// IMP=0x0010000000003563
- (long long)CDXTicketPCNT;	// IMP=0x001000000000354c
- (long long)CDXTicketPID;	// IMP=0x0010000000003535
- (struct sockaddr *)sockAddr;	// IMP=0x0010000000066eb8
@end

