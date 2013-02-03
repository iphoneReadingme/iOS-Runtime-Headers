/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding> {
    NSInteger _copies;
    NSInteger _duplex;
    NSString *_jobName;
    NSInteger _orientation;
    NSInteger _outputType;
    NSString *_printerID;
    BOOL _scaleUp;
}

@property(copy) NSString *jobName;
@property(copy) NSString *printerID;
@property NSInteger copies;
@property NSInteger duplex;
@property NSInteger orientation;
@property NSInteger outputType;
@property BOOL scaleUp;

+ (void)_saveDuplex:(NSInteger)arg1;
+ (void)_savePrinter:(id)arg1;
+ (id)printInfo;
+ (id)printInfoWithDictionary:(id)arg1;

- (id)_createPrintSettingsForPrinter:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (void)_updateWithPrinter:(id)arg1;
- (NSInteger)copies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (NSInteger)duplex;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)jobName;
- (NSInteger)orientation;
- (NSInteger)outputType;
- (id)printerID;
- (BOOL)scaleUp;
- (void)setCopies:(NSInteger)arg1;
- (void)setDuplex:(NSInteger)arg1;
- (void)setJobName:(id)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)setOutputType:(NSInteger)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setScaleUp:(BOOL)arg1;

@end