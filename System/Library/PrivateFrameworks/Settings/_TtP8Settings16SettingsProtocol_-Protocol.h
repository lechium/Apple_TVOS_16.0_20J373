//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Settings/_TtP8Settings20SettingsBaseProtocol_-Protocol.h>

@class NSString;
@protocol _TtP8Settings20SettingsHostProtocol_;

@protocol _TtP8Settings16SettingsProtocol_ <_TtP8Settings20SettingsBaseProtocol_>
@property(nonatomic, retain) id <_TtP8Settings20SettingsHostProtocol_> settingsHost;

@optional
- (void)setCloudSyncEnabled:(_Bool)arg1;
- (void)isCloudSyncEnabled:(void (^)(_Bool, NSError *))arg1;
- (void)didUnselect;
- (void)willSelectWithSidebarItemWithUUID:(NSString *)arg1;
- (void)willSelect;
- (void)willSelect:(void (^)(void))arg1;
@end

