//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ChannelCheckpoint : NSManagedObject
{
}

+ (id)identifierKeyPath;	// IMP=0x00400000000036a3
+ (id)predicateForChannelIdentifier:(id)arg1;	// IMP=0x00400000000036b0
+ (id)fetchRequest;	// IMP=0x0040000000065d7a

// Remaining properties
@property(copy, nonatomic) NSString *channelID; // @dynamic channelID;
@property(nonatomic) long long checkpoint; // @dynamic checkpoint;

@end

