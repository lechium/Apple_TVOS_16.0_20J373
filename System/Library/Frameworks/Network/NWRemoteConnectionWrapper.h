//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, NWConnection;

__attribute__((visibility("hidden")))
@interface NWRemoteConnectionWrapper : NSObject
{
    NSUUID *_clientID;	// 8 = 0x8
    NWConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000543180
@property(retain) NWConnection *connection; // @synthesize connection=_connection;
@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;

@end

