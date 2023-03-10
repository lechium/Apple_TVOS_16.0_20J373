//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDBulletinBoard, NSData, NSNumber, NSString;

@protocol HMDPersistentStore <NSObject>
+ (HMDBulletinBoard *)unarchiveBulletinBoard;
+ (void)archiveBulletinBoard:(HMDBulletinBoard *)arg1;
- (NSNumber *)writeData:(NSData *)arg1 toStorePath:(NSString *)arg2 dataLabel:(NSString *)arg3;
@end

