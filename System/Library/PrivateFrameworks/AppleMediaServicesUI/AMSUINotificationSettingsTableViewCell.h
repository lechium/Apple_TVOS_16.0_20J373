//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class AMSNotificationSettingsItem, UISwitch;
@protocol AMSUINotificationInAppSettingsTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface AMSUINotificationSettingsTableViewCell : UITableViewCell
{
    id <AMSUINotificationInAppSettingsTableViewCellDelegate> _delegate;	// 8 = 0x8
    AMSNotificationSettingsItem *_item;	// 16 = 0x10
    UISwitch *_itemSwitch;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000036217
@property(retain, nonatomic) UISwitch *itemSwitch; // @synthesize itemSwitch=_itemSwitch;
@property(retain, nonatomic) AMSNotificationSettingsItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <AMSUINotificationInAppSettingsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)switchToggled:(id)arg1;	// IMP=0x000000000003608b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000035e13

@end

