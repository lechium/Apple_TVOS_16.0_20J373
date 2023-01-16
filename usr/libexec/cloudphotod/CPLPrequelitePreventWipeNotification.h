//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CPLPrequelitePreventWipeNotification : NSObject
{
    NSString *_libraryIdentifier;	// 8 = 0x8
    NSString *_defaultsKey;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    NSDate *_ignoreBeforeDate;	// 32 = 0x20
}

+ (void)resetNotificationForLibraryIdentifier:(id)arg1;	// IMP=0x0040000000054f01
- (void).cxx_destruct;	// IMP=0x0020000000055bd7
@property(readonly, nonatomic) NSDate *ignoreBeforeDate; // @synthesize ignoreBeforeDate=_ignoreBeforeDate;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *defaultsKey; // @synthesize defaultsKey=_defaultsKey;
@property(readonly, nonatomic) NSString *libraryIdentifier; // @synthesize libraryIdentifier=_libraryIdentifier;
- (id)createRadarURL;	// IMP=0x00100000000557b5
- (_Bool)shouldPreventWipeOnUpgradeCreateRadar:(_Bool)arg1;	// IMP=0x00100000000556f6
- (_Bool)_warnUserAndReturnIfShouldPreventWipeOnUpgradeCreateRadar:(_Bool)arg1;	// IMP=0x00100000000551d4
- (void)_save;	// IMP=0x001000000005514f
- (id)initWithLibraryIdentifier:(id)arg1 reason:(id)arg2;	// IMP=0x0010000000054fed

@end
