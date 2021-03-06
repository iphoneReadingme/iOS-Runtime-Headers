/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBSectionInfo, NSArray, NSData, NSString;

@interface BBSectionInfo : NSObject <NSCopying, NSCoding> {
    unsigned int _alertType;
    NSArray *_dataProviderIDs;
    NSString *_displayName;
    BOOL _displaysCriticalBulletins;
    NSString *_factorySectionID;
    BOOL _hideWeeApp;
    NSData *_iconData;
    unsigned int _notificationCenterLimit;
    BBSectionInfo *_parentSection;
    NSString *_pathToWeeAppPluginBundle;
    unsigned int _pushSettings;
    NSString *_sectionID;
    unsigned int _sectionType;
    BOOL _showsInLockScreen;
    BOOL _showsInNotificationCenter;
    BOOL _showsMessagePreview;
    BOOL _showsOnBluetoothDevices;
    NSString *_subsectionID;
    int _subsectionPriority;
    NSArray *_subsections;
    BOOL _suppressFromSettings;
    unsigned int _suppressedSettings;
    unsigned int _version;
}

@property unsigned int alertType;
@property unsigned int bulletinCount;
@property(copy) NSArray * dataProviderIDs;
@property(copy) NSString * displayName;
@property BOOL displaysCriticalBulletins;
@property BOOL enabled;
@property(copy) NSString * factorySectionID;
@property BOOL hideWeeApp;
@property(copy) NSData * iconData;
@property unsigned int notificationCenterLimit;
@property BBSectionInfo * parentSection;
@property(copy) NSString * pathToWeeAppPluginBundle;
@property unsigned int pushSettings;
@property(copy) NSString * sectionID;
@property unsigned int sectionType;
@property BOOL showsInLockScreen;
@property BOOL showsInNotificationCenter;
@property BOOL showsMessagePreview;
@property BOOL showsOnBluetoothDevices;
@property(copy) NSString * subsectionID;
@property int subsectionPriority;
@property(copy) NSArray * subsections;
@property BOOL suppressFromSettings;
@property unsigned int suppressedSettings;
@property unsigned int version;

+ (id)defaultSectionInfoForType:(unsigned int)arg1;
+ (BOOL)defaultStateForSetting:(unsigned int)arg1 inSectionType:(unsigned int)arg2;

- (void)_addSubsection:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (void)_configureWithDefaultsForSectionType:(unsigned int)arg1;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (id)_pushSettingsDescription;
- (void)_replaceSubsection:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (unsigned int)alertType;
- (unsigned int)bulletinCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataProviderIDs;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (BOOL)displaysCriticalBulletins;
- (id)effectiveSectionInfo;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1;
- (BOOL)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)factorySectionID;
- (BOOL)hideWeeApp;
- (id)iconData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)notificationCenterLimit;
- (id)parentSection;
- (id)pathToWeeAppPluginBundle;
- (unsigned int)pushSettings;
- (id)sectionID;
- (unsigned int)sectionType;
- (void)setAlertType:(unsigned int)arg1;
- (void)setBulletinCount:(unsigned int)arg1;
- (void)setDataProviderIDs:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaysCriticalBulletins:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFactorySectionID:(id)arg1;
- (void)setHideWeeApp:(BOOL)arg1;
- (void)setIconData:(id)arg1;
- (void)setNotificationCenterLimit:(unsigned int)arg1;
- (void)setParentSection:(id)arg1;
- (void)setPathToWeeAppPluginBundle:(id)arg1;
- (void)setPushSettings:(unsigned int)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSectionType:(unsigned int)arg1;
- (void)setShowsInLockScreen:(BOOL)arg1;
- (void)setShowsInNotificationCenter:(BOOL)arg1;
- (void)setShowsMessagePreview:(BOOL)arg1;
- (void)setShowsOnBluetoothDevices:(BOOL)arg1;
- (void)setSubsectionID:(id)arg1;
- (void)setSubsectionPriority:(int)arg1;
- (void)setSubsections:(id)arg1;
- (void)setSuppressFromSettings:(BOOL)arg1;
- (void)setSuppressedSettings:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (BOOL)showsInLockScreen;
- (BOOL)showsInNotificationCenter;
- (BOOL)showsMessagePreview;
- (BOOL)showsOnBluetoothDevices;
- (id)subsectionID;
- (int)subsectionPriority;
- (id)subsections;
- (BOOL)suppressFromSettings;
- (unsigned int)suppressedSettings;
- (unsigned int)version;

@end
