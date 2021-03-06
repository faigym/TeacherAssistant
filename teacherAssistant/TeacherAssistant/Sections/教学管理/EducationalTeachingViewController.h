//
//  EducationalTeachingViewController.h
//  TeacherAssistant
//
//  Created by MyUpinup on 15/1/5.
//  Copyright (c) 2015年 MyUpinup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
#import "educationTeachingCell.h"
#import  "EucationModel.h"
@interface EducationalTeachingViewController : BaseViewController<UITableViewDataSource,UITableViewDelegate>
@property (nonatomic,strong) UITableView * educational_tableView;
@property (nonatomic,strong) NSArray * education_array;
///**
//    *  保存所有组的数据(其中每一元素都是一个模型对象)
//**/
@property (nonatomic, strong) NSArray * educationGroups;
@end
