//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFObjectCasting-Protocol.h>
#import <HomeKitDaemon/NSObject-Protocol.h>

@class MKFObjectDatabaseID, Protocol;

@protocol MKFObject <NSObject, MKFObjectCasting>
+ (Protocol *)backingModelProtocol;
@property(readonly, copy, nonatomic) MKFObjectDatabaseID *databaseID;
@end

